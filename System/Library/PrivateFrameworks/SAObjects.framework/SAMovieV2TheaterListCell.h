/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:25 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SADistance, NSString, SAMovieV2MovieListSnippet;

@interface SAMovieV2TheaterListCell : SADomainObject

@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,copy) NSString * theaterAddress; 
@property (nonatomic,copy) NSString * theaterName; 
@property (nonatomic,retain) SAMovieV2MovieListSnippet * theaterShowtimeListSnippet; 
+(id)theaterListCell;
+(id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAMovieV2MovieListSnippet *)theaterShowtimeListSnippet;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
-(NSString *)theaterAddress;
-(void)setTheaterAddress:(NSString *)arg1 ;
-(void)setTheaterShowtimeListSnippet:(SAMovieV2MovieListSnippet *)arg1 ;
@end
