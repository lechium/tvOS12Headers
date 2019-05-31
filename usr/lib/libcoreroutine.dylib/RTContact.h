/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RTContact : NSObject {

	NSString* _identifier;
	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSArray* _postalAddresses;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * givenName;                   //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                  //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;                  //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
-(NSArray *)postalAddresses;
-(NSString *)givenName;
-(NSString *)middleName;
-(id)initWithIdentifier:(id)arg1 givenName:(id)arg2 middleName:(id)arg3 familyName:(id)arg4 postalAddresses:(id)arg5 ;
-(id)init;
-(NSString *)identifier;
-(id)description;
-(NSString *)familyName;
@end
