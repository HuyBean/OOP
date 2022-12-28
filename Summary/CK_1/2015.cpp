#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>

using namespace std;

class OOP_Market
{
private:
    vector<Sap *> dsSap;

public:
    void nhap(istream &in)
    {
        int n;
        cout << "Nhap so luong sap: ";
        in >> n;
        dsSap.resize(n);
        for (int i = 0; i < n; i++)
        {
            cout << "Nhap loai 1 - Sap thuc pham, 2 - Sap quan ao, 3 - sap trang suc: ";
            int loai;
            in >> loai;

            switch (loai)
            {
            case 1:
                dsSap[i] = new SapThucPham();
                break;
            case 2:
                dsSap[i] = new SapQuanAo();
                break;
            case 3:
                dsSap[i] = new SapTrangSuc();
                break;
            default:
                cout << "Loai sap khong hop le" << endl;
            }
            dsSap[i]->nhap(in);
        }
    }
    int tongSoTien()
    {
        int total = 0;
        for (int i = 0; i < dsSap.size(); i++)
        {
            total += dsSap[i]->tinhTienPhaiDong();
        }
        return total;
    }
};

class Sap
{
private:
    const int DON_GIA_SAP = 40000000;
    int soThuTu;
    int dienTich;
    int tinhTienThueSap()
    {
        return DON_GIA_SAP * dienTich;
    }

protected:
    int doanhThu;
    virtual int tinhThueDoanhThu() = 0;
    virtual int tinhTienDichVu()
    {
        return 0;
    }

public:
    Sap()
    {
        this->dienTich = 100;
        this->doanhThu = 10000000;
        this->soThuTu = 1;
    }
    Sap(const Sap &S)
    {
        this->dienTich = S.dienTich;
        this->doanhThu = S.doanhThu;
        this->soThuTu = S.soThuTu;
    }
    Sap &operator=(const Sap S)
    {
        this->dienTich = S.dienTich;
        this->doanhThu = S.doanhThu;
        this->soThuTu = S.soThuTu;
    }
    int tinhTienPhaiDong()
    {
        return tinhTienThueSap() + tinhTienDichVu() + tinhThueDoanhThu();
    }
    virtual void nhap(istream &in)
    {
        cout << "Nhap so thu tu: ";
        in >> soThuTu;
        cout << "Nhap dien tich: ";
        in >> dienTich;
        cout << "Nhap doanh thu: ";
        in >> doanhThu;
    }
};

class SapThucPham : public Sap
{
private:
    int tienDichVu;

protected:
    int tinhThueDoanhThu()
    {
        return doanhThu * 5 / 100;
    }
};

class SapQuanAo : public Sap
{
private:
    int tienDichVu;

protected:
    int tinhThueDoanhThu()
    {
        return doanhThu * 10 / 100;
    }
};

class SapTrangSuc : public Sap
{
private:
    int tienDichVu;

protected:
    int tinhThueDoanhThu()
    {
        if (doanhThu < 100000000)
        {
            return doanhThu * 20 / 100;
        }
        return doanhThu * 30 / 100;
    }
};
int main()
{
}