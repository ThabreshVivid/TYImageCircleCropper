//
//  CropImage.h
//  ImageCirclCropper
//
//  Created by Thabresh on 9/1/16.
//  Copyright © 2016 VividInfotech. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CropImageDelegate <NSObject>

- (void) imageCropedInCircle : (UIImage *) Croppedimage;

@end


@interface CropImage : UIViewController<UIGestureRecognizerDelegate>

@property (nonatomic, retain) id <CropImageDelegate> delegate;
@property (nonatomic, retain) UIImage *origionalImage;

@end
