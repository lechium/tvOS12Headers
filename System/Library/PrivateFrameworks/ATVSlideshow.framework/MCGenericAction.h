/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAction.h>

@class NSMutableDictionary, NSDictionary;

@interface MCGenericAction : MCAction {

	NSMutableDictionary* _attributes;

}

@property (copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)genericActionForTargetPlugObjectID:(id)arg1 withAttributes:(id)arg2 ;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)description;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
@end

