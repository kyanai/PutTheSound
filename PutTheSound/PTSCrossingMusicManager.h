//
//  PTSCrossingMusicManager.h
//  PutTheSound
//
//  Created by 千葉 俊輝 on 2014/02/16.
//  Copyright (c) 2014年 Toshiki Chiba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTSCrossingMusicManager : NSObject
+ (PTSCrossingMusicManager *)sharedManager;
- (void)addSongObject:(NSDictionary*)dic;
- (NSArray*)getSongsArray;
- (void)resetSongsArray;
- (BOOL)containSongID:(NSString*)string;
@end
