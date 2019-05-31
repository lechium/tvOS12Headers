/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class CNPhoneNumber, NSString;

@interface CNPhoneNumberContactPredicate : CNPredicate <CNSuggestedContactPredicate> {

	BOOL _returnsMultipleResults;
	CNPhoneNumber* _phoneNumber;
	NSString* _prefixHint;
	NSString* _digits;
	NSString* _countryCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) CNPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL returnsMultipleResults;                   //@synthesize returnsMultipleResults=_returnsMultipleResults - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefixHint;                    //@synthesize prefixHint=_prefixHint - In the implementation block
@property (nonatomic,readonly) NSString * digits;                             //@synthesize digits=_digits - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)countryCode;
-(CNPhoneNumber *)phoneNumber;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(id)shortDebugDescription;
-(BOOL)returnsMultipleResults;
-(id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(BOOL)arg2 ;
-(id)initWithPhoneNumber:(id)arg1 returnMultipleResults:(BOOL)arg2 prefixHint:(id)arg3 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 returnMultipleResults:(BOOL)arg3 ;
-(NSString *)prefixHint;
-(NSString *)digits;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

