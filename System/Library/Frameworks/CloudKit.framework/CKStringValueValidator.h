/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance {

	NSString* _value;

}

@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithValue:(id)arg1 ;
-(id)CKPropertiesDescription;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
@end

