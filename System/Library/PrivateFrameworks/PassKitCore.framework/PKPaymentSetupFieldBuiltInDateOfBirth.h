/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupFieldDate.h>

@class NSDate;

@interface PKPaymentSetupFieldBuiltInDateOfBirth : PKPaymentSetupFieldDate {

	NSDate* _defaultDate;

}
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)isBuiltIn;
-(id)defaultDate;
@end

