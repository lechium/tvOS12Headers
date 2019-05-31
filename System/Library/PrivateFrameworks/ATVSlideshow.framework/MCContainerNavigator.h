/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCContainer.h>

@class NSMutableDictionary, NSString, MCPlugHaven, NSSet;

@interface MCContainerNavigator : MCContainer {

	NSMutableDictionary* mPlugs;
	NSString* mStartPlugID;
	MCPlugHaven* mStartPlug;

}

@property (readonly) NSSet * plugs; 
@property (readonly) unsigned long long countOfPlugs; 
@property (nonatomic,copy) NSString * startPlugID; 
@property (readonly) MCPlugHaven * startPlug; 
-(id)plugForID:(id)arg1 ;
-(void)removePlugForID:(id)arg1 ;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(void)demolish;
-(void)removePlug:(id)arg1 ;
-(NSString *)startPlugID;
-(void)setStartPlugID:(NSString *)arg1 ;
-(NSSet *)plugs;
-(MCPlugHaven *)startPlug;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(unsigned long long)countOfPlugs;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(void)removeAllPlugs;
-(id)init;
@end
