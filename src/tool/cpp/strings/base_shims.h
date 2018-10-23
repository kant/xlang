
namespace winrt::impl
{
    template <typename D>
    void consume_IAsyncAction<D>::Completed(Windows::Foundation::AsyncActionCompletedHandler const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncAction)->put_Completed(get_abi(handler)));
    }

    template <typename D>
    Windows::Foundation::AsyncActionCompletedHandler consume_IAsyncAction<D>::Completed() const
    {
        Windows::Foundation::AsyncActionCompletedHandler handler{};
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncAction)->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult>
    void consume_IAsyncOperation<D, TResult>::Completed(Windows::Foundation::AsyncOperationCompletedHandler<TResult> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperation<TResult>)->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult>
    Windows::Foundation::AsyncOperationCompletedHandler<TResult> consume_IAsyncOperation<D, TResult>::Completed() const
    {
        Windows::Foundation::AsyncOperationCompletedHandler<TResult> temp;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperation<TResult>)->get_Completed(put_abi(temp)));
        return temp;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Progress(Windows::Foundation::AsyncActionProgressHandler<TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionProgressHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncActionProgressHandler<TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TProgress>
    void consume_IAsyncActionWithProgress<D, TProgress>::Completed(Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TProgress>
    Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> consume_IAsyncActionWithProgress<D, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncActionWithProgressCompletedHandler<TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncActionWithProgress<TProgress>)->get_Completed(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress(Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->put_Progress(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Progress() const
    {
        Windows::Foundation::AsyncOperationProgressHandler<TResult, TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->get_Progress(put_abi(handler)));
        return handler;
    }

    template <typename D, typename TResult, typename TProgress>
    void consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed(Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> const& handler) const
    {
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->put_Completed(get_abi(handler)));
    }

    template <typename D, typename TResult, typename TProgress>
    Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> consume_IAsyncOperationWithProgress<D, TResult, TProgress>::Completed() const
    {
        Windows::Foundation::AsyncOperationWithProgressCompletedHandler<TResult, TProgress> handler;
        check_hresult(WINRT_SHIM(Windows::Foundation::IAsyncOperationWithProgress<TResult, TProgress>)->get_Completed(put_abi(handler)));
        return handler;
    }
}
