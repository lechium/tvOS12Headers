/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSOrderedSet;

@interface TVHSDAAPMovieInfo : NSObject {

	NSString* _studio;
	NSOrderedSet* _cast;
	NSOrderedSet* _directors;
	NSOrderedSet* _codirectors;
	NSOrderedSet* _producers;
	NSOrderedSet* _screenwriters;

}

@property (nonatomic,copy) NSString * studio;                         //@synthesize studio=_studio - In the implementation block
@property (nonatomic,copy) NSOrderedSet * cast;                       //@synthesize cast=_cast - In the implementation block
@property (nonatomic,copy) NSOrderedSet * directors;                  //@synthesize directors=_directors - In the implementation block
@property (nonatomic,copy) NSOrderedSet * codirectors;                //@synthesize codirectors=_codirectors - In the implementation block
@property (nonatomic,copy) NSOrderedSet * producers;                  //@synthesize producers=_producers - In the implementation block
@property (nonatomic,copy) NSOrderedSet * screenwriters;              //@synthesize screenwriters=_screenwriters - In the implementation block
-(NSOrderedSet *)directors;
-(void)setDirectors:(NSOrderedSet *)arg1 ;
-(NSString *)studio;
-(void)setStudio:(NSString *)arg1 ;
-(NSOrderedSet *)producers;
-(NSOrderedSet *)screenwriters;
-(void)setProducers:(NSOrderedSet *)arg1 ;
-(void)setScreenwriters:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)codirectors;
-(void)setCodirectors:(NSOrderedSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCast:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)cast;
@end

