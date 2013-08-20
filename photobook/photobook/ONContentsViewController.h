//
//  ONContentsViewController.h
//  photobook
//
//  Created by SeulBeom on 13. 7. 15..
//  Copyright (c) 2013년 SeulBeom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "ONTextView.h"

@interface ONContentsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, AVAudioPlayerDelegate> {
    
@private
    AVAudioPlayer* audioPlayer;
    AVAudioPlayer* efectPlayer;
    AVAudioPlayer* bgmPlayer;
    AVAudioPlayer* clickEffectPlayer;
    
    int currentViewIndex;
    int maxViewIndex;
    
    int bgmCounter;
    
    NSArray *contentsList;
    NSArray *soundsList;
    NSArray *subsList;
    int audioIndex;
    
    NSString *lang;
    //UIImageView* mosaicImageView;
    
    UIImage* rightBImage;
    UIImage* leftBImage;
    
}

- (IBAction)doMenu;
- (IBAction)doPrev;
- (IBAction)doNext;
- (IBAction)doMosaic;
- (IBAction)doPageSelection;
- (IBAction)doAudioPlay;
- (IBAction)doReplay:(id)sender;
- (IBAction)doChangeLang;
- (IBAction)onContents:(UIStoryboardSegue *)segue;
- (IBAction)playButtonClickedEffectSound:(id)sender;
- (void)playBookWithIndex:(int)index;

@property (nonatomic, retain) IBOutlet UIView*           contentsView;
@property (nonatomic, retain) IBOutlet UIView*           zoomInLayer;
@property (nonatomic, retain) IBOutlet UIImageView*      contentsImageView;
@property (nonatomic, retain) IBOutlet UIImageView*      mosaicImageView;
@property (nonatomic, retain) IBOutlet UIButton*         languageButton;
@property (nonatomic, retain) IBOutlet UIView*           menuBar;
@property (nonatomic, retain) IBOutlet UIButton*         menuIcon;
@property (nonatomic, retain) IBOutlet UICollectionView* onCollectionView;
@property (nonatomic, retain) IBOutlet UIView*           pageView;
@property (nonatomic, retain) IBOutlet UIButton*         right;
@property (nonatomic, retain) IBOutlet UIButton*         left;
@property (nonatomic, retain) IBOutlet UITextView*       subtitleView;

@end
