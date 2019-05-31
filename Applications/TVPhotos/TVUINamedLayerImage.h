//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINamedLayerImage.h"

@class NSString, UIImage;

@interface TVUINamedLayerImage : NSObject <UINamedLayerImage>
{
    _Bool _fixedFrame;	// 8 = 0x8
    int _blendMode;	// 12 = 0xc
    struct CGImage *_image;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    double _opacity;	// 32 = 0x20
    UIImage *_imageObj;	// 40 = 0x28
    struct CGRect _frame;	// 48 = 0x30
}

@property(retain, nonatomic) UIImage *imageObj; // @synthesize imageObj=_imageObj;
@property(nonatomic) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
- (void).cxx_destruct;	// IMP=0x00000001000885fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

