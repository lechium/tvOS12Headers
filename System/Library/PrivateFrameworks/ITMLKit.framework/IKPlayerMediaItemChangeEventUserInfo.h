/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerMediaItemChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	long long _reason;

}

@property (nonatomic,readonly) long long reason;                       //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(id)initWithReason:(long long)arg1 ;
-(long long)reason;
-(NSDictionary *)properties;
@end

