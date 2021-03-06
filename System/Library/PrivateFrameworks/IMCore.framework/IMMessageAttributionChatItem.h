/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMMessageStatusChatItem.h>

@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem {

	NSDictionary* _attributionInfo;
	long long _attributionType;

}

@property (nonatomic,copy,readonly) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,readonly) long long attributionType;                        //@synthesize attributionType=_attributionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID; 
-(long long)attributionType;
-(id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 ;
-(NSDictionary *)attributionInfo;
-(NSString *)bundleID;
@end

