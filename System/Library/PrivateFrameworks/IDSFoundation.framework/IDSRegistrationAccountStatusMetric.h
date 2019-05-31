/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSDictionary, NSString;

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTRTCMetric> {

	int _accountType;
	NSString* _serviceIdentifier;
	BOOL _doesExist;
	BOOL _isEnabled;
	BOOL _isUserDisabled;
	BOOL _isiCloudSignedIn;
	BOOL _isiTunesSignedIn;
	long long _registrationStatus;
	long long _registrationError;
	int _registrationErrorReason;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned short rtcType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) int accountType;                                      //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                         //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL doesExist;                                       //@synthesize doesExist=_doesExist - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled;                                       //@synthesize isEnabled=_isEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isUserDisabled;                                  //@synthesize isUserDisabled=_isUserDisabled - In the implementation block
@property (nonatomic,readonly) BOOL isiCloudSignedIn;                                //@synthesize isiCloudSignedIn=_isiCloudSignedIn - In the implementation block
@property (nonatomic,readonly) BOOL isiTunesSignedIn;                                //@synthesize isiTunesSignedIn=_isiTunesSignedIn - In the implementation block
@property (nonatomic,readonly) long long registrationStatus;                         //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (nonatomic,readonly) long long registrationError;                          //@synthesize registrationError=_registrationError - In the implementation block
@property (nonatomic,readonly) int registrationErrorReason;                          //@synthesize registrationErrorReason=_registrationErrorReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)registrationError;
-(BOOL)doesExist;
-(BOOL)isUserDisabled;
-(BOOL)isiCloudSignedIn;
-(long long)registrationStatus;
-(int)registrationErrorReason;
-(BOOL)isiTunesSignedIn;
-(unsigned short)rtcType;
-(id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(BOOL)arg3 isEnabled:(BOOL)arg4 isUserDisabled:(BOOL)arg5 isiCloudSignedIn:(BOOL)arg6 isiTunesSignedIn:(BOOL)arg7 registrationStatus:(long long)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10 ;
-(NSString *)serviceIdentifier;
-(int)accountType;
-(NSString *)name;
-(BOOL)isEnabled;
-(NSDictionary *)dictionaryRepresentation;
@end

