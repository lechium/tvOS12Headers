/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@interface TRSetupCompletionRequest : TRRequestMessage {

	BOOL _completedSuccessfully;
	long long _errorCode;

}

@property (assign,nonatomic) BOOL completedSuccessfully;              //@synthesize completedSuccessfully=_completedSuccessfully - In the implementation block
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(BOOL)completedSuccessfully;
-(void)setCompletedSuccessfully:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
