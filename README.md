# HNButton #

Drop-in for UIButton. Was using a basic version of this for network requests, extended it further to accommodate a bit of customisation.

## What do we get? ##
* UIButton with built-in UIActivityIndicatorView
* Optional Transition State to display the outcome of the button action
* Customisable loading/transition/end state

## How do we set it up? ##

* Import  ``` "HNButton.h"  ```


* Buttons can be created created programmatically with any *UIButtonType*

```objc
    HNButton* button = [HNButton buttonWithType:UIButtonType];
```

* Buttons can be created in IB/Storyboards

![Storyboards](http://i.imgur.com/XW3ZGJo.png)

* IndicatorView starts animating on button click


* **Required:** To stop animating indicatorView
```objc
    //Revert to original
    [button finishLoading];

    //OR

    //Revert to original after a transition state 
    [button finishLoading:YES];
    [button finishLoading:NO];

```

* *Optional:* To discontinue indicatorView for future clicks

```objc
    //Disables the indicator
    [button disableButtonIndicator];
    //Call enableButtonIndicator to use indicator again

    //Button should move to UIControlStateSelected after loading (/+transition)
    [button setSelectedOnCompletion];
    //Unselect button to use indicator again
```

* Customise loading state by making changes to *UIControlStateDisabled*

* Check HNExample for how to customise the indicator and transition state

## License ##

Resources and code are free to use.

## Future Versions ##

More options for transition state.
