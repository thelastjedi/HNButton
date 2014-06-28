//
//  MainViewController.h
//  HNExample
//
//  Created by Harshita Chandra on 27/05/14.
//  Copyright (c) 2014. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HNButton.h"

@interface MainViewController : UIViewController
{
    //Add buttons programmatically
    HNButton * codedButton;
    HNButton * codedButton2;
}

//Or use Storyboard
@property (strong, nonatomic) IBOutlet HNButton *bgColour;
@property (strong, nonatomic) IBOutlet HNButton *bgImage;
@property (strong, nonatomic) IBOutlet HNButton *bgColourIcon;
@property (strong, nonatomic) IBOutlet HNButton *bgImageIcon;
@property (strong, nonatomic) IBOutlet HNButton *withHandler;

@end
