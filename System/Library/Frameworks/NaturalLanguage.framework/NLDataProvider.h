/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NLModelConfiguration, NSArray, NSDictionary;

@interface NLDataProvider : NSObject {

	NLModelConfiguration* _configuration;
	CFStringTokenizerRef _tokenizer;
	NSArray* _instances;
	NSDictionary* _labelMap;
	NSDictionary* _inverseLabelMap;
	NSDictionary* _vocabularyMap;
	NSDictionary* _documentFrequencyMap;
	unsigned long long _numberOfLabels;
	unsigned long long _numberOfVocabularyEntries;
	unsigned long long _numberOfTokens;
	BOOL _generatedMaps;

}

@property (copy,readonly) NLModelConfiguration * configuration; 
@property (readonly) unsigned long long numberOfInstances; 
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTokens;
-(id)labelMap;
-(id)vocabularyMap;
-(id)documentFrequencyMap;
-(unsigned long long)numberOfInstances;
-(id)inverseLabelMap;
-(id)initWithConfiguration:(id)arg1 dataURL:(id)arg2 ;
-(void)generateMapsWithModelTrainer:(id)arg1 ;
-(void)_generateMapsWithModelTrainer:(id)arg1 ;
-(void)_generateMaps;
-(unsigned long long)numberOfLabels;
-(unsigned long long)numberOfVocabularyEntries;
-(void)dealloc;
-(NLModelConfiguration *)configuration;
-(CFStringTokenizerRef)tokenizer;
@end

