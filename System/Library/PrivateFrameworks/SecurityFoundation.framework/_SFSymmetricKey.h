/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/_SFKey.h>

@class _SFSymmetricKeySpecifier;

@interface _SFSymmetricKey : _SFKey {

	id _symmetricKeyInternal;

}

@property (nonatomic,copy,readonly) _SFSymmetricKeySpecifier * keySpecifier; 
+(Class)_attributesClass;
-(id)keyData;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2 ;
-(id)_keyData;
@end
