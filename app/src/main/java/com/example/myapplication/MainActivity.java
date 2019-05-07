package com.example.myapplication;

import android.net.Uri;
import android.os.Bundle;
import android.support.design.widget.BottomNavigationView;
import android.support.v7.app.AppCompatActivity;
import android.support.annotation.NonNull;
import android.view.MenuItem;
import android.widget.TextView;
import tv.danmaku.ijk.media.example.widget.media.*;


public class MainActivity extends AppCompatActivity {
    private TextView mTextMessage;
    private IjkVideoView Ijk_VideoView;

    private BottomNavigationView.OnNavigationItemSelectedListener mOnNavigationItemSelectedListener
            = new BottomNavigationView.OnNavigationItemSelectedListener() {

        @Override
        public boolean onNavigationItemSelected(@NonNull MenuItem item) {
            switch (item.getItemId()) {
                case R.id.navigation_home:
                    mTextMessage.setText(R.string.title_home);
                    return true;
                case R.id.navigation_dashboard:
                    mTextMessage.setText(R.string.title_dashboard);
                    return true;
                case R.id.navigation_notifications:
                    mTextMessage.setText(R.string.title_notifications);
                    return true;
            }
            return false;
        }
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        BottomNavigationView navView = findViewById(R.id.nav_view);
        mTextMessage = findViewById(R.id.message);
        navView.setOnNavigationItemSelectedListener(mOnNavigationItemSelectedListener);
        NDKHelper.initndkhelper();
        initView();

        /**
         * 普通播放：
         */
        Ijk_VideoView.setAspectRatio(IRenderView.AR_ASPECT_FIT_PARENT);
        Ijk_VideoView.setVideoURI(Uri.parse("http://devimages.apple.com/iphone/samples/bipbop/gear1/prog_index.m3u8"));
        Ijk_VideoView.start();


    }
    private void initView() {
        Ijk_VideoView = (IjkVideoView) findViewById(R.id.Ijk_VideoView);
    }

}
