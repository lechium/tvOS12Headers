/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetVideo : MCAsset {

	NSMutableSet* mSlides;

}

@property (readonly) NSSet * slides; 
-(NSSet *)slides;
-(void)demolish;
-(BOOL)isInUse;
-(void)learnSlide:(id)arg1 ;
-(void)forgetSlide:(id)arg1 ;
-(id)init;
@end
