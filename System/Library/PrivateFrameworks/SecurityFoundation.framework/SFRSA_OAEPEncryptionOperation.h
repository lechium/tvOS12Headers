/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SFRSAEncryptionOperation.h>

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation {

	id _oaepEncryptionOperationInternal;

}

@property (nonatomic,copy) id<SFMaskGenerationFunction> maskGenerationFunction; 
-(id<SFMaskGenerationFunction>)maskGenerationFunction;
-(id)initWithKeySpecifier:(id)arg1 ;
-(void)setMaskGenerationFunction:(id<SFMaskGenerationFunction>)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 maskGenerationFunction:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

