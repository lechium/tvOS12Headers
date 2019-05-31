/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:17 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSDictionary;

@interface ISDialogButton : NSObject <SSXPCCoding> {

	int _actionType;
	id _parameter;
	NSString* _title;
	long long _urlType;
	NSString* _subtarget;
	NSDictionary* _dictionary;
	BOOL _tidContinue;
	long long _tag;

}

@property (retain) NSDictionary * dictionary;                        //@synthesize dictionary=_dictionary - In the implementation block
@property (assign) int actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (retain) id parameter;                                     //@synthesize parameter=_parameter - In the implementation block
@property (readonly) BOOL shouldContinueTouchIDSession;              //@synthesize tidContinue=_tidContinue - In the implementation block
@property (retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (copy) NSString * subtarget;                               //@synthesize subtarget=_subtarget - In the implementation block
@property (assign) long long urlType;                                //@synthesize urlType=_urlType - In the implementation block
@property (assign) long long tag;                                    //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithTitle:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)urlType;
-(int)actionType;
-(void)setActionType:(int)arg1 ;
-(id)parameter;
-(BOOL)shouldContinueTouchIDSession;
-(void)performDefaultActionForDialog:(id)arg1 ;
-(void)setActionTypeWithString:(id)arg1 ;
-(void)setParameter:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 superficial:(BOOL)arg2 ;
-(int)_actionTypeForString:(id)arg1 ;
-(void)setSubtarget:(NSString *)arg1 ;
-(long long)_urlTypeForString:(id)arg1 ;
-(void)_openURLWithRequest:(id)arg1 ;
-(NSString *)subtarget;
-(void)loadFromDictionary:(id)arg1 ;
-(void)setUrlType:(long long)arg1 ;
-(NSDictionary *)dictionary;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTag:(long long)arg1 ;
-(long long)tag;
-(void)setDictionary:(NSDictionary *)arg1 ;
@end

