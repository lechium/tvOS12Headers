//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, TVDeckImageView;

@interface TVMusicParadeViewController : UIViewController
{
    TVDeckImageView *_deckImageView;	// 8 = 0x8
    NSArray *_artworkCatalogs;	// 16 = 0x10
    struct CGPoint _imageOffset;	// 24 = 0x18
}

@property(nonatomic) struct CGPoint imageOffset; // @synthesize imageOffset=_imageOffset;
@property(retain, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
- (void).cxx_destruct;	// IMP=0x000000010001303c
- (void)_updateImageFrame;	// IMP=0x0000000100012fc4
- (void)viewWillLayoutSubviews;	// IMP=0x0000000100012eb0
- (void)viewDidLoad;	// IMP=0x0000000100012d98
- (id)initWithImageOffset:(struct CGPoint)arg1;	// IMP=0x0000000100012d38

@end

