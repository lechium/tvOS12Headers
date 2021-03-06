/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENAccountKey, ENDeviceKey;
@interface ENAccountIdentity : NSObject <NSSecureCoding> {

	id<ENAccountKey> _accountKey;
	id<ENDeviceKey> _deviceKey;

}

@property (nonatomic,retain) id<ENAccountKey> accountKey;              //@synthesize accountKey=_accountKey - In the implementation block
@property (nonatomic,retain) id<ENDeviceKey> deviceKey;                //@synthesize deviceKey=_deviceKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDeviceKey:(id<ENDeviceKey>)arg1 ;
-(void)setAccountKey:(id<ENAccountKey>)arg1 ;
-(id<ENAccountKey>)accountKey;
-(id<ENDeviceKey>)deviceKey;
-(id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

