/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:20 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/MBClipsLoader.h>

@class Project, NSMutableDictionary, NSMutableArray;

@interface MBProjectClipsLoader : MBClipsLoader {

	Project* _project;
	NSMutableDictionary* _identifierURLsToClipsMap;
	NSMutableArray* _assetURLs;

}

@property (retain) NSMutableDictionary * identifierURLsToClipsMap;              //@synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap - In the implementation block
@property (nonatomic,retain) Project * project;                                 //@synthesize project=_project - In the implementation block
@property (retain) NSMutableArray * assetURLs;                                  //@synthesize assetURLs=_assetURLs - In the implementation block
+(BOOL)clipFormatValid:(id)arg1 validateVideoFormat:(BOOL)arg2 ;
-(Project *)project;
-(void)setProject:(Project *)arg1 ;
-(id)clips;
-(void)setIdentifierURLsToClipsMap:(NSMutableDictionary *)arg1 ;
-(void)projectMoviesDidChange:(id)arg1 ;
-(void)projectDidCleanupUnusedMediaFiles:(id)arg1 ;
-(NSMutableDictionary *)identifierURLsToClipsMap;
-(void)removeClipWithURL:(id)arg1 ;
-(NSMutableArray *)assetURLs;
-(void)setAssetURLs:(NSMutableArray *)arg1 ;
-(id)initWithProject:(id)arg1 showOnlyFavorites:(BOOL)arg2 ;
-(void)loadClipAtPath:(id)arg1 ;
-(void)projectDidUndoOrRedo:(id)arg1 ;
-(long long)countForAllClips;
-(void)dealloc;
-(void)load;
@end

