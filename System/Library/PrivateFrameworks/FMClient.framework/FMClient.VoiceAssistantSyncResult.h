/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString;

@interface FMClient.VoiceAssistantSyncResult : NSObject <NSSecureCoding> {

	 devices;
	 anchor;

}

@property (readonly,nonatomic) NSSet * devices; 
@property (readonly,nonatomic) NSString * anchor; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(NSSet *)devices;
-(id)initWithDevices:(id)arg1 anchor:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)anchor;
@end
