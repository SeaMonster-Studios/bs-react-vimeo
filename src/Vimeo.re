[@bs.module "@u-wave/react-vimeo"] [@react.component]
external make:
  (
    ~video: string,
    ~id: string=?,
    ~className: string=?,
    ~width: string=?,
    ~height: string=?,
    ~paused: bool=?,
    ~volume: int=?,
    ~start: int=?,
    ~autoplay: bool=?,
    ~showByline: bool=?,
    ~color: string=?,
    ~controls: bool=?,
    ~loop: bool=?,
    ~showPortrait: bool=?,
    ~showTitle: bool=?,
    ~muted: bool=?,
    ~background: bool=?,
    ~responsive: bool=?,
    ~onReady: unit => unit=?,
    ~onError: unit => unit=?,
    ~onPlay: unit => unit=?,
    ~onEnd: unit => unit=?,
    ~onTimeUpdate: unit => unit=?,
    ~onProgress: unit => unit=?,
    ~onSeeked: unit => unit=?,
    ~onTextTrackChange: unit => unit=?,
    ~onCueChange: unit => unit=?,
    ~onCuePoint: unit => unit=?,
    ~onVolumneChange: unit => unit=?,
    ~onLoaded: unit => unit=?
  ) =>
  React.element =
  "default";