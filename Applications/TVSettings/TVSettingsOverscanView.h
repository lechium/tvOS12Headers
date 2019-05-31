//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface TVSettingsOverscanView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    UILabel *_actionSafeLabel;	// 24 = 0x18
    UILabel *_fullscreenLabel;	// 32 = 0x20
    NSString *_actionSafeText;	// 40 = 0x28
    NSString *_fullscreenText;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *fullscreenText; // @synthesize fullscreenText=_fullscreenText;
@property(copy, nonatomic) NSString *actionSafeText; // @synthesize actionSafeText=_actionSafeText;
- (void).cxx_destruct;	// IMP=0x000000010008c850
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010008c4d4
- (void)layoutSubviews;	// IMP=0x000000010008c160
@property(copy, nonatomic) NSString *instructionText;
@property(copy, nonatomic) NSString *titleText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008bb6c

@end

