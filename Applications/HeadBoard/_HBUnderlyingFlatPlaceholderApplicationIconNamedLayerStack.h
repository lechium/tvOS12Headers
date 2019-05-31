//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINamedLayerStack.h"

@class NSArray, NSString, UIImage;

@interface _HBUnderlyingFlatPlaceholderApplicationIconNamedLayerStack : NSObject <UINamedLayerStack>
{
    NSString *_name;	// 8 = 0x8
    NSArray *_layers;	// 16 = 0x10
    UIImage *_flatImage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100030f7c
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithApplication:(id)arg1;	// IMP=0x0000000100030c88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

