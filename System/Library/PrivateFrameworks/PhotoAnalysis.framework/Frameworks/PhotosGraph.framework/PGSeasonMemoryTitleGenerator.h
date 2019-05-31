/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator {

	NSString* _season;
	unsigned long long _category;

}

@property (nonatomic,retain) NSString * season;                        //@synthesize season=_season - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
-(NSString *)season;
-(void)setSeason:(NSString *)arg1 ;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 seasonName:(id)arg2 category:(unsigned long long)arg3 ;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
@end

