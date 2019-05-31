/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:00 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldLabel : PKPaymentSetupField

@property (nonatomic,copy,readonly) NSString * title; 
-(void)updateWithConfiguration:(id)arg1 ;
-(unsigned long long)fieldType;
-(id)submissionString;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)setCurrentValue:(id)arg1 ;
-(NSString *)title;
-(id)displayString;
@end

