/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSCharacterSet, NSObject;

@interface CHCharacterSetRules : NSObject {

	NSCharacterSet* _lowercaseCharSet;
	NSCharacterSet* _uppercaseCharSet;
	NSCharacterSet* _digitCharSet;
	NSCharacterSet* _startPunctuationCharSet;
	NSCharacterSet* _middlePunctuationCharSet;
	NSCharacterSet* _endPunctuationCharSet;
	NSCharacterSet* _digitStartPunctuationCharSet;
	NSCharacterSet* _digitEndPunctuationCharSet;
	NSCharacterSet* _arithmeticOperatorCharSet;
	NSCharacterSet* _dateTimeSeparatorCharSet;
	NSCharacterSet* _dateTimeEndLetterCharSet;
	NSCharacterSet* _numeralEndLetterCharSet;
	NSCharacterSet* _lexiconSkipCharSet;
	NSCharacterSet* _containsDotCharSet;
	NSCharacterSet* _prefixCapitalizationExceptionCharSet;
	NSCharacterSet* _selfLoopPunctuationCharSet;
	NSCharacterSet* _emoticonTopCharSet;
	NSCharacterSet* _emoticonMiddleCharSet;
	NSCharacterSet* _emoticonBottomCharSet;
	NSObject*<OS_dispatch_queue> __charSetRulesQueue;
	map<unsigned int, unsigned long, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long> > >* _strokeMaxPenalties;
	map<unsigned int, int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, int> > >* _signatureUniChar;

}

@property (nonatomic,retain) NSCharacterSet * lowercaseCharSet;                                     //@synthesize lowercaseCharSet=_lowercaseCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * uppercaseCharSet;                                     //@synthesize uppercaseCharSet=_uppercaseCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * digitCharSet;                                         //@synthesize digitCharSet=_digitCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * startPunctuationCharSet;                              //@synthesize startPunctuationCharSet=_startPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * middlePunctuationCharSet;                             //@synthesize middlePunctuationCharSet=_middlePunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * endPunctuationCharSet;                                //@synthesize endPunctuationCharSet=_endPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * digitStartPunctuationCharSet;                         //@synthesize digitStartPunctuationCharSet=_digitStartPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * digitEndPunctuationCharSet;                           //@synthesize digitEndPunctuationCharSet=_digitEndPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * arithmeticOperatorCharSet;                            //@synthesize arithmeticOperatorCharSet=_arithmeticOperatorCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * dateTimeSeparatorCharSet;                             //@synthesize dateTimeSeparatorCharSet=_dateTimeSeparatorCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * dateTimeEndLetterCharSet;                             //@synthesize dateTimeEndLetterCharSet=_dateTimeEndLetterCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * numeralEndLetterCharSet;                              //@synthesize numeralEndLetterCharSet=_numeralEndLetterCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * lexiconSkipCharSet;                                   //@synthesize lexiconSkipCharSet=_lexiconSkipCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * containsDotCharSet;                                   //@synthesize containsDotCharSet=_containsDotCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * prefixCapitalizationExceptionCharSet;                 //@synthesize prefixCapitalizationExceptionCharSet=_prefixCapitalizationExceptionCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * selfLoopPunctuationCharSet;                           //@synthesize selfLoopPunctuationCharSet=_selfLoopPunctuationCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emoticonTopCharSet;                                   //@synthesize emoticonTopCharSet=_emoticonTopCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emoticonMiddleCharSet;                                //@synthesize emoticonMiddleCharSet=_emoticonMiddleCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * emoticonBottomCharSet;                                //@synthesize emoticonBottomCharSet=_emoticonBottomCharSet - In the implementation block
@property (assign,nonatomic) map<unsigned int strokeMaxPenalties;                                   //@synthesize strokeMaxPenalties=_strokeMaxPenalties - In the implementation block
@property (assign,nonatomic) map<unsigned int signatureUniChar;                                     //@synthesize signatureUniChar=_signatureUniChar - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> _charSetRulesQueue;              //@synthesize _charSetRulesQueue=__charSetRulesQueue - In the implementation block
+(unsigned long long)characterType:(unsigned)arg1 ;
+(unsigned long long)expectedMinStrokeCount:(unsigned)arg1 ;
+(unsigned long long)expectedMaxStrokeCount:(unsigned)arg1 ;
+(id)sharedCharacterSetRules;
-(NSObject*<OS_dispatch_queue>)_charSetRulesQueue;
-(unsigned long long)_expectedMaxStrokeCount:(unsigned)arg1 ;
-(unsigned long long)_expectedMinStrokeCount:(unsigned)arg1 ;
-(unsigned long long)_characterType:(unsigned)arg1 ;
-(NSCharacterSet *)lowercaseCharSet;
-(void)setLowercaseCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)uppercaseCharSet;
-(void)setUppercaseCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)digitCharSet;
-(void)setDigitCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)startPunctuationCharSet;
-(void)setStartPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)middlePunctuationCharSet;
-(void)setMiddlePunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)endPunctuationCharSet;
-(void)setEndPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)digitStartPunctuationCharSet;
-(void)setDigitStartPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)digitEndPunctuationCharSet;
-(void)setDigitEndPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)arithmeticOperatorCharSet;
-(void)setArithmeticOperatorCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)dateTimeSeparatorCharSet;
-(void)setDateTimeSeparatorCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)dateTimeEndLetterCharSet;
-(void)setDateTimeEndLetterCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)numeralEndLetterCharSet;
-(void)setNumeralEndLetterCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)lexiconSkipCharSet;
-(void)setLexiconSkipCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)containsDotCharSet;
-(void)setContainsDotCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)prefixCapitalizationExceptionCharSet;
-(void)setPrefixCapitalizationExceptionCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)selfLoopPunctuationCharSet;
-(void)setSelfLoopPunctuationCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emoticonTopCharSet;
-(void)setEmoticonTopCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emoticonMiddleCharSet;
-(void)setEmoticonMiddleCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)emoticonBottomCharSet;
-(void)setEmoticonBottomCharSet:(NSCharacterSet *)arg1 ;
-(map<unsigned int)strokeMaxPenalties;
-(void)setStrokeMaxPenalties:(map<unsigned int)arg1 ;
-(map<unsigned int)signatureUniChar;
-(void)setSignatureUniChar:(map<unsigned int)arg1 ;
-(id)init;
-(void)dealloc;
@end

