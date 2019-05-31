/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.PlaySoundDevice : NSObject <NSSecureCoding> {

	 serverId;
	 locality;
	 safetyWarningConfirmed;

}

@property (readonly,nonatomic) NSString * serverId; 
@property (readonly,nonatomic) NSString * locality; 
@property (readonly,nonatomic) BOOL safetyWarningConfirmed; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(id)PlaySoundDeviceLocalityLocal;
+(id)PlaySoundDeviceLocalityRemote;
+(id)PlaySoundDeviceLocalityUnknown;
+(BOOL)supportsSecureCoding;
-(NSString *)locality;
-(NSString *)serverId;
-(BOOL)safetyWarningConfirmed;
-(id)initWithServerId:(id)arg1 locality:(id)arg2 safetyWarningConfirmed:(BOOL)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
@end

