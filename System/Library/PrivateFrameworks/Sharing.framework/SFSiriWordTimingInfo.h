/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:50 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class NSString;

@interface SFSiriWordTimingInfo : NSObject {

	double _timeOffset;
	NSString* _wordID;
	NSRange _textRange;

}

@property (assign,nonatomic) double timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) NSRange textRange;              //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,copy) NSString * wordID;                //@synthesize wordID=_wordID - In the implementation block
+(id)serializableArrayWithTimingInfoArray:(id)arg1 ;
+(id)timingInfoArrayWithSerializableArray:(id)arg1 ;
-(NSString *)wordID;
-(void)setWordID:(NSString *)arg1 ;
-(id)dictionary;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(id)initWithDictionary:(id)arg1 ;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
@end

