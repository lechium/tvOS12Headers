/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriResponse.h>

@class NSArray;

@interface AFSetSettingsResponse : AFSiriResponse {

	NSArray* _settingChanges;

}
+(BOOL)supportsSecureCoding;
-(id)_initWithRequest:(id)arg1 settingChanges:(id)arg2 ;
-(id)settingChanges;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

