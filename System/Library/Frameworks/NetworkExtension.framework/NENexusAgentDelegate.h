/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NENexusAgentDelegate <NSObject>
@required
-(void)handleAssertFromClient:(id)arg1;
-(void)handleUnassertFromClient:(id)arg1;
-(BOOL)handleRequestNexusFromClient:(id)arg1;
-(void)closeFlowWithClientIdentifier:(id)arg1;
-(void)handleStartFromClient:(id)arg1;

@end
