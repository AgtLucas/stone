type pressed =
  | Depressed
  | Idle;

type focus =
  | NotFocused
  | FocusedFromMouse
  | FocusedFromKeyboard;

type state = {
  pressed,
  focus
};

let component = ReasonReact.statefulComponent "Touchable";

let make
    ::onPress
    ::style=?
    ::onKeyPress=?
    ::onKeyDown=?
    ::onKeyUp=?
    ::onFocus=?
    ::onBlur=?
  children => {
    let handleFocus event {ReasonReact.state: state} => {
      switch onFocus {
        Some onFocus => onFocus event
        None => ()
      };
    }
  }
