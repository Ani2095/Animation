//
//  ViewController.h
//  IOS_Day9_Animation
//
//  Created by Felix ITs 03 on 14/09/17.
//  Copyright © 2017 felix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController



@property (weak, nonatomic) IBOutlet UIImageView *ballImage;


- (IBAction)animateBall:(id)sender;


@property CGRect ballFrame;

@end

