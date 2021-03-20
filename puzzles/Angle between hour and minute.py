class Solution:
    def getAngle(self, h, m):
        if(h == 12):
            h = 0
        if(m == 60):
            m = 0
        hour_angle = 0.5*(h*60+m)
        min_angle = 6*m

        angle = abs(hour_angle - min_angle)
        angle = min(360-angle, angle)
        return int(angle)


ob = Solution()
print(ob.getAngle(1, 60))
