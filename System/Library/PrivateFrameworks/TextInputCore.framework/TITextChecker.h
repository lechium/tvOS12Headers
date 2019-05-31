/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TIUITextChecking;
#import <TextInputCore/TextInputCore-Structs.h>
@interface TITextChecker : NSObject {

	id<_TIUITextChecking> _checker;

}

@property (nonatomic,readonly) id<_TIUITextChecking> checker;              //@synthesize checker=_checker - In the implementation block
+(id)_UITextCheckerWithAsynchronousLoading:(BOOL)arg1 ;
-(id)initWithAsynchronousLoading:(BOOL)arg1 ;
-(BOOL)doneLoading;
-(id<_TIUITextChecking>)checker;
-(id)init;
-(NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5 ;
@end
