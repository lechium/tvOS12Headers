/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSString;

@interface AVCCaptionsResult : NSObject {

	BOOL _utteranceComplete;
	NSMutableArray* _tokens;
	unsigned _utteranceNumber;
	unsigned _updateNumber;

}

@property (nonatomic,readonly) BOOL utteranceComplete;                //@synthesize utteranceComplete=_utteranceComplete - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                      //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) unsigned utteranceNumber;              //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (nonatomic,readonly) unsigned updateNumber;                 //@synthesize updateNumber=_updateNumber - In the implementation block
-(unsigned)utteranceNumber;
-(unsigned)updateNumber;
-(id)initWithCapacity:(long long)arg1 utteranceComplete:(BOOL)arg2 utteranceNumber:(unsigned)arg3 updateNumber:(unsigned)arg4 ;
-(BOOL)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
-(BOOL)utteranceComplete;
-(void)dealloc;
-(id)description;
-(NSString *)text;
-(NSArray *)tokens;
@end

