#ifndef org_apache_lucene_analysis_CharArrayMap_H
#define org_apache_lucene_analysis_CharArrayMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class Object;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArrayMap;
        class CharArraySet;
        class CharArrayMap$EntrySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArrayMap : public ::java::util::AbstractMap {
         public:
          enum {
            mid_init$_b8f283cdbda5c964,
            mid_init$_f2949932cebbb77f,
            mid_clear_f2cc1bce94666404,
            mid_containsKey_2cd6b83cb18fe093,
            mid_containsKey_8b72f2dcdde6fd1d,
            mid_containsKey_4c2a9c7f32a6ad26,
            mid_copy_88eeed32f715c127,
            mid_emptyMap_360b031d826aaf33,
            mid_entrySet_1d5b236bebb8dcd6,
            mid_get_02b63332574637fb,
            mid_get_e5ae0f8c04795fa9,
            mid_get_6c211a5648c8aecb,
            mid_keySet_7aec8e69a9807ca1,
            mid_put_ffc1f734610880bf,
            mid_put_fad6cebff83150fd,
            mid_put_b1bfcab6305554e2,
            mid_put_128a89bbc17a8b69,
            mid_remove_e5ae0f8c04795fa9,
            mid_size_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            mid_unmodifiableMap_43d1481483396c0f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArrayMap(jobject obj) : ::java::util::AbstractMap(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArrayMap(const CharArrayMap& obj) : ::java::util::AbstractMap(obj) {}

          CharArrayMap(jint, jboolean);
          CharArrayMap(const ::java::util::Map &, jboolean);

          void clear() const;
          jboolean containsKey(const ::java::lang::CharSequence &) const;
          jboolean containsKey(const ::java::lang::Object &) const;
          jboolean containsKey(const JArray< jchar > &, jint, jint) const;
          static CharArrayMap copy(const ::java::util::Map &);
          static CharArrayMap emptyMap();
          ::org::apache::lucene::analysis::CharArrayMap$EntrySet entrySet() const;
          ::java::lang::Object get(const ::java::lang::CharSequence &) const;
          ::java::lang::Object get(const ::java::lang::Object &) const;
          ::java::lang::Object get(const JArray< jchar > &, jint, jint) const;
          ::org::apache::lucene::analysis::CharArraySet keySet() const;
          ::java::lang::Object put(const JArray< jchar > &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::String &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          ::java::lang::Object remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::lang::String toString() const;
          static CharArrayMap unmodifiableMap(const CharArrayMap &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharArrayMap);
        extern PyTypeObject *PY_TYPE(CharArrayMap);

        class t_CharArrayMap {
        public:
          PyObject_HEAD
          CharArrayMap object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArrayMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArrayMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArrayMap&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
