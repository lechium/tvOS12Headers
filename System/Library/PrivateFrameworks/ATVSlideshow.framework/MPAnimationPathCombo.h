/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAnimationPath.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>

@class NSMutableDictionary, NSString;

@interface MPAnimationPathCombo : MPAnimationPath <MPAnimationSupport> {

	NSMutableDictionary* _animationPaths;
	NSString* _operation;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * operation;              //@synthesize operation=_operation - In the implementation block
+(id)animationPath;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)setAnimationPath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setOperation:(NSString *)arg1 ;
-(NSString *)operation;
-(void)cleanup;
-(void)setKey:(NSString *)arg1 ;
@end

