
WINRT_EXPORT namespace winrt
{
    template <typename T>
    struct agile_ref
    {
        agile_ref(std::nullptr_t = nullptr) noexcept {}

        agile_ref(impl::com_ref<T> const& object)
        {
            if (object)
            {
                check_hresult(WINRT_RoGetAgileReference(0, guid_of<T>(), winrt::get_abi(object), m_ref.put_void()));
            }
        }

        auto get() const noexcept
        {
            impl::com_ref<T> result{ nullptr };

            if (m_ref)
            {
                m_ref->Resolve(guid_of<T>(), put_abi(result));
            }

            return result;
        }

        explicit operator bool() const noexcept
        {
            return static_cast<bool>(m_ref);
        }

    private:

        com_ptr<impl::IAgileReference> m_ref;
    };

    template <typename T>
    agile_ref<T> make_agile(T const& object)
    {
        return object;
    }
}
