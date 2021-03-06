/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol EKProtocolObject <NSObject>
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@required
+(id)propertiesUnavailableForPartialObjects;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(NSDictionary *)preFrozenRelationshipObjects;
-(BOOL)isNew;
-(BOOL)isFrozen;

@end

