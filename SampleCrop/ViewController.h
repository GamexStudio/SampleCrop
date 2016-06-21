//
//  ViewController.h
//  SampleCrop
//
//  Created by Volansys_MACMINI on 21/06/16.
//  Copyright © 2016 Volansys_MACMINI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)takePic:(id)sender;
- (IBAction)selectPic:(id)sender;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *nextBarButton;
- (IBAction)nextTapped:(id)sender;

@end

