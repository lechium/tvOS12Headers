/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString, NSArray;

@interface NLDataInstance : NSObject

@property (copy,readonly) NSString * string; 
@property (copy,readonly) NSString * label; 
@property (copy,readonly) NSArray * tokens; 
@property (copy,readonly) NSArray * labels; 
-(NSArray *)labels;
-(CFDictionaryRef)instanceDictionary;
-(id)initWithString:(id)arg1 label:(id)arg2 ;
-(id)initWithLine:(id)arg1 tokenizer:(CFStringTokenizerRef)arg2 ;
-(id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2 ;
-(id)locatorsWithIndex:(unsigned long long)arg1 parameters:(NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(CFStringTokenizerRef)arg4 ;
-(id)subInstanceWithLocator:(id)arg1 tokenizer:(CFStringTokenizerRef)arg2 ;
-(NSString *)string;
-(NSString *)label;
-(NSArray *)tokens;
@end
