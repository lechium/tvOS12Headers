/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNErrorFactory : NSObject
+(id)errorByPrependingKeyPath:(id)arg1 toKeyPathsInError:(id)arg2 ;
+(id)genericiOSABError;
+(long long)CNErrorCodeForABError:(CFErrorRef)arg1 ;
+(id)errorForiOSABError:(CFErrorRef)arg1 ;
+(id)errorObject:(id)arg1 doesNotImplementSelector:(SEL)arg2 ;
+(id)errorByAddingUserInfoEntries:(id)arg1 toError:(id)arg2 ;
+(id)_localizedReasonForCode:(long long)arg1 ;
+(id)_localizedDescriptionForCode:(long long)arg1 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
@end
