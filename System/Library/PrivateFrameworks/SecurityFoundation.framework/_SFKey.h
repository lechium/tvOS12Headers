/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSData, _SFKeySpecifier, NSString;

@interface _SFKey : NSObject {

	id _keyInternal;
	NSData* _keyData;

}

@property (nonatomic,readonly) NSData * keyData;                                 //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,copy,readonly) _SFKeySpecifier * keySpecifier; 
@property (nonatomic,copy,readonly) NSString * keyDomain; 
+(Class)_attributesClass;
+(id)_specifierForSecKey:(SecKeyRef)arg1 ;
-(NSData *)keyData;
-(_SFKeySpecifier *)keySpecifier;
-(NSString *)keyDomain;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initRandomKeyWithSpecifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
@end

