//
//  ONMosaicViewController.h
//  photobook
//
//  Created by SeulBeom on 13. 7. 15..
//  Copyright (c) 2013년 SeulBeom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "../PaperMosaic/PaperMosaicCanvas.h"

@interface ONMosaicViewController : UIViewController {
    BOOL isAuto;
}

@property(retain, nonatomic) IBOutlet PaperMosaicCanvas *paperMosaicCanvas;
@property(retain, nonatomic) IBOutlet UIButton *autoMosaicButton;

- (IBAction)doAsAutoMode:(UIButton *)sender;
- (IBAction)colorChangeFrom:(UIButton *)sender;
- (UIImage*)resultImage;

@end
